
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServer_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServer_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateServerMetadataOptionsRequestBody.h>
#include <string>
#include <huaweicloud/ecs/v2/model/SecurityOptions.h>
#include <huaweicloud/ecs/v2/model/EnclaveOptions.h>
#include <vector>
#include <huaweicloud/ecs/v2/model/SerialConsoleOptions.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerSecurityGroup.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerRootVolume.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerNic.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerSchedulerHints.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerPublicip.h>
#include <huaweicloud/ecs/v2/model/CpuOptions.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerDataVolume.h>
#include <map>
#include <huaweicloud/ecs/v2/model/PostPaidServerExtendParam.h>
#include <huaweicloud/ecs/v2/model/PostPaidServerTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建弹性云服务器（按需）接口Body体。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  PostPaidServer
    : public ModelBase
{
public:
    PostPaidServer();
    virtual ~PostPaidServer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PostPaidServer members

    /// <summary>
    /// 弹性云服务器定时删除时间。  时间格式例如：2020-01-19T03:30:52Z
    /// </summary>

    std::string getAutoTerminateTime() const;
    bool autoTerminateTimeIsSet() const;
    void unsetautoTerminateTime();
    void setAutoTerminateTime(const std::string& value);

    /// <summary>
    /// 如果需要使用密码方式登录云服务器，可使用adminPass字段指定云服务器管理员帐户初始登录密码。其中，Linux管理员帐户为root，Windows管理员帐户为Administrator。具体使用方法请参见接口描述信息（设置登录鉴权方式）。  密码复杂度要求：   - 长度为8-26位。  - 密码至少必须包含大写字母、小写字母、数字和特殊字符（!@$%^-_&#x3D;+[{}]:,./?）中的三种。 - 密码不能包含用户名或用户名的逆序。  - Windows系统密码不能包含用户名或用户名的逆序，不能包含用户名中超过两个连续字符的部分。
    /// </summary>

    std::string getAdminPass() const;
    bool adminPassIsSet() const;
    void unsetadminPass();
    void setAdminPass(const std::string& value);

    /// <summary>
    /// 待创建云服务器所在的可用分区，需要指定可用分区（AZ）的名称。  可通过接口 [查询可用区列表接口](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;ECS&amp;api&#x3D;NovaListAvailabilityZones) 获取，也可参考[地区和终端节点](https://developer.huaweicloud.com/endpoint)获取。
    /// </summary>

    std::string getAvailabilityZone() const;
    bool availabilityZoneIsSet() const;
    void unsetavailabilityZone();
    void setAvailabilityZone(const std::string& value);

    /// <summary>
    /// 是否支持随机多AZ部署。  - “true”：批量创建的ecs部署在多个AZ上 - “false”：批量创建的ecs部署在单个AZ上  &gt; 说明： &gt;  &gt; 当availability_zone为空时该字段生效。
    /// </summary>

    bool isBatchCreateInMultiAz() const;
    bool batchCreateInMultiAzIsSet() const;
    void unsetbatchCreateInMultiAz();
    void setBatchCreateInMultiAz(bool value);

    /// <summary>
    /// 创建云服务器数量。  约束：  - 不传该字段时默认取值为1。 - 租户的配额足够时，最大值为500。
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 云服务器对应数据盘相关配置。每一个数据结构代表一块待创建的数据盘。 约束：目前新创建的弹性云服务器最多可挂载23块数据盘。
    /// </summary>

    std::vector<PostPaidServerDataVolume>& getDataVolumes();
    bool dataVolumesIsSet() const;
    void unsetdataVolumes();
    void setDataVolumes(const std::vector<PostPaidServerDataVolume>& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerExtendParam getExtendparam() const;
    bool extendparamIsSet() const;
    void unsetextendparam();
    void setExtendparam(const PostPaidServerExtendParam& value);

    /// <summary>
    /// 待创建云服务器的系统规格的ID。  可通过 [规格列表接口](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;ECS&amp;api&#x3D;ListFlavors) 查询，该接口支持通过 availability_zone 参数过滤出待创建云服务器可用区下可用的规格。  已上线的各规格详情介绍请参见《[弹性云服务器产品介绍](https://support.huaweicloud.com/ecs/index.html)》的“实例类型与规格”章节。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);

    /// <summary>
    /// 待创建云服务器的系统镜像，需要指定已创建镜像的ID，ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID）。  镜像的ID可以从镜像服务的 [查询镜像列表](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;IMS&amp;api&#x3D;ListImages) 接口获取，该接口可根据 __imagetype、__os_type 等参数过滤选择合适镜像。
    /// </summary>

    std::string getImageRef() const;
    bool imageRefIsSet() const;
    void unsetimageRef();
    void setImageRef(const std::string& value);

    /// <summary>
    /// 当批量创建弹性云服务器时，云服务器名称是否允许重名，当count大于1的时候该参数生效。默认为True。  - True，表示允许重名。 - False，表示不允许重名。
    /// </summary>

    bool isIsAutoRename() const;
    bool isAutoRenameIsSet() const;
    void unsetisAutoRename();
    void setIsAutoRename(bool value);

    /// <summary>
    /// 如果需要使用SSH密钥方式登录云服务器，请指定已创建密钥的名称。  密钥可以通过密钥创建接口进行创建（请参见[创建和导入SSH密钥](https://support.huaweicloud.com/api-dew/CreateKeypair.html)），或使用SSH密钥查询接口查询已有的密钥（请参见[查询SSH密钥列表](https://support.huaweicloud.com/api-dew/ListKeypairs.html)）。
    /// </summary>

    std::string getKeyName() const;
    bool keyNameIsSet() const;
    void unsetkeyName();
    void setKeyName(const std::string& value);

    /// <summary>
    /// 用户自定义字段键值对。  &gt; 说明： &gt;  &gt; - 最多可注入10对键值（Key/Value）。 &gt; - 主键（Key）只能由大写字母（A-Z）、小写字母（a-z）、数字（0-9）、中划线（-）、下划线（_）、冒号（:）和小数点（.）组成，长度为[1-255]个字符。 &gt; - 值（value）最大长度为255个字符。  系统预留字段  1. op_svc_userid : 用户ID       2. agency_name  :  委托的名称   委托是由租户管理员在统一身份认证服务（Identity and Access Management，IAM）上创建的，可以为弹性云服务器提供访问云服务的临时凭证。  &gt; 说明： &gt;  &gt; 委托获取、更新请参考如下步骤： &gt;  &gt; 1. 使用IAM服务提供的[查询委托列表](https://support.huaweicloud.com/api-iam/zh-cn_topic_0079467614.html)接口，获取有效可用的委托名称。 &gt; 2. 使用[更新云服务器元数](https://support.huaweicloud.com/api-ecs/zh-cn_topic_0025560298.html)据接口，更新metadata中agency_name字段为新的委托名称。  3. __support_agent_list: 云服务器是否支持企业主机安全、主机监控。 - \&quot;hss\&quot;：企业主机安全 - \&quot;ces\&quot;：主机监控  取值样例： __support_agent_list: \&quot;hss,ces\&quot;  可以通过查询[镜像详情](https://support.huaweicloud.com/api-ims/ims_03_0702.html)判断创建云服务器使用的镜像是否支持企业主机安全或主机监控。
    /// </summary>

    std::map<std::string, std::string>& getMetadata();
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 云服务器名称。  取值范围：  - 只能由中文字符、英文字母、数字及“_”、“-”、“.”组成，且长度为[1-64]个字符。 - 创建的云服务器器数量（count字段对应的值）大于1时，为区分不同云服务器，创建过程中系统会自动在名称后加“-0000”的类似标记。故此时名称的长度为[1-59]个字符。  &gt; 说明： &gt;  &gt; 云服务器虚拟机内部(hostname)命名规则遵循 RFC 952和RFC 1123命名规范，建议使用a-zA-z或0-9以及中划线\&quot;-\&quot;组成的名称命名，\&quot;_\&quot;将在弹性云服务器内部默认转化为\&quot;-\&quot;。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 待创建云服务器的网卡信息。  约束：  - 网卡对应的子网（subnet）必须属于vpcid对应的VPC。 - 当前单个云服务器支持最多挂载12张网卡。 - 不同的规格对网卡上限有一定的区别，参考[规格清单](https://support.huaweicloud.com/productdesc-ecs/zh-cn_topic_0159822360.html)。
    /// </summary>

    std::vector<PostPaidServerNic>& getNics();
    bool nicsIsSet() const;
    void unsetnics();
    void setNics(const std::vector<PostPaidServerNic>& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerSchedulerHints getOsSchedulerHints() const;
    bool osSchedulerHintsIsSet() const;
    void unsetosSchedulerHints();
    void setOsSchedulerHints(const PostPaidServerSchedulerHints& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerPublicip getPublicip() const;
    bool publicipIsSet() const;
    void unsetpublicip();
    void setPublicip(const PostPaidServerPublicip& value);

    /// <summary>
    /// 
    /// </summary>

    PostPaidServerRootVolume getRootVolume() const;
    bool rootVolumeIsSet() const;
    void unsetrootVolume();
    void setRootVolume(const PostPaidServerRootVolume& value);

    /// <summary>
    /// 云服务器对应安全组信息。  约束：当该值指定为空时，默认给云服务器绑定default安全组。
    /// </summary>

    std::vector<PostPaidServerSecurityGroup>& getSecurityGroups();
    bool securityGroupsIsSet() const;
    void unsetsecurityGroups();
    void setSecurityGroups(const std::vector<PostPaidServerSecurityGroup>& value);

    /// <summary>
    /// 弹性云服务器的标签。  &gt; 说明： &gt;  &gt; 创建弹性云服务器时，一台弹性云服务器最多可以添加10个标签。 &gt; 公有云新增server_tags字段，该字段与tags字段功能相同，支持的key、value取值范围更广，建议使用server_tags字段。
    /// </summary>

    std::vector<PostPaidServerTag>& getServerTags();
    bool serverTagsIsSet() const;
    void unsetserverTags();
    void setServerTags(const std::vector<PostPaidServerTag>& value);

    /// <summary>
    /// 弹性云服务器的标签。  标签的格式为“key.value”。其中，key的长度不超过36个字符，value的长度不超过43个字符。  标签命名时，需满足如下要求：  - 标签的key值只能包含大写字母（A~Z）、小写字母（a~z）、数字（0-9）、下划线（_）、中划线（-）以及中文字符。 - 标签的value值只能包含大写字母（A~Z）、小写字母（a~z）、数字（0-9）、下划线（_）、中划线（-）、小数点（.）以及中文字符。  &gt; 说明： &gt;  &gt; 创建弹性云服务器时，一台弹性云服务器最多可以添加10个标签。 &gt; 公有云新增server_tags字段，该字段与tags字段功能相同，支持的key、value取值范围更广，建议使用server_tags字段。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 创建云服务器过程中待注入用户数据。支持注入文本、文本文件或gzip文件。  更多关于待注入用户数据的信息，请参见《弹性云服务器用户指南 》的“[用户数据注入](https://support.huaweicloud.com/usermanual-ecs/zh-cn_topic_0032380449.html)”章节。  约束：  - 注入内容，需要进行base64格式编码。注入内容（编码之前的内容）最大长度32KB。 - 创建密码方式鉴权的Linux弹性云服务器时，该字段可为root用户注入自定义初始化密码，具体注入密码的使用方法请参见接口描述（设置登录鉴权方式）。 示例（base64编码前）：  - Linux弹性云服务器  &#x60;&#x60;&#x60; #! /bin/bash echo user_test &gt;&gt; /home/user.txt &#x60;&#x60;&#x60;  - Windows弹性云服务器  &#x60;&#x60;&#x60; rem cmd echo 111 &gt; c:\\\\aaa.tx &#x60;&#x60;&#x60;
    /// </summary>

    std::string getUserData() const;
    bool userDataIsSet() const;
    void unsetuserData();
    void setUserData(const std::string& value);

    /// <summary>
    /// 待创建云服务器所属虚拟私有云（简称VPC），需要指定已创建VPC的ID，UUID格式。  可通过 [查询VPC列表](https://apiexplorer.developer.huaweicloud.com/apiexplorer/doc?product&#x3D;VPC&amp;api&#x3D;ListVpcs) 接口查询。
    /// </summary>

    std::string getVpcid() const;
    bool vpcidIsSet() const;
    void unsetvpcid();
    void setVpcid(const std::string& value);

    /// <summary>
    /// 云服务器描述信息，默认为空字符串。  - 长度最多允许85个字符。 - 不能包含“&lt;” 和 “&gt;”。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CpuOptions getCpuOptions() const;
    bool cpuOptionsIsSet() const;
    void unsetcpuOptions();
    void setCpuOptions(const CpuOptions& value);

    /// <summary>
    /// 
    /// </summary>

    SecurityOptions getSecurityOptions() const;
    bool securityOptionsIsSet() const;
    void unsetsecurityOptions();
    void setSecurityOptions(const SecurityOptions& value);

    /// <summary>
    /// 
    /// </summary>

    SerialConsoleOptions getSerialConsoleOptions() const;
    bool serialConsoleOptionsIsSet() const;
    void unsetserialConsoleOptions();
    void setSerialConsoleOptions(const SerialConsoleOptions& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateServerMetadataOptionsRequestBody getMetadataOptions() const;
    bool metadataOptionsIsSet() const;
    void unsetmetadataOptions();
    void setMetadataOptions(const UpdateServerMetadataOptionsRequestBody& value);

    /// <summary>
    /// 
    /// </summary>

    EnclaveOptions getEnclaveOptions() const;
    bool enclaveOptionsIsSet() const;
    void unsetenclaveOptions();
    void setEnclaveOptions(const EnclaveOptions& value);


protected:
    std::string autoTerminateTime_;
    bool autoTerminateTimeIsSet_;
    std::string adminPass_;
    bool adminPassIsSet_;
    std::string availabilityZone_;
    bool availabilityZoneIsSet_;
    bool batchCreateInMultiAz_;
    bool batchCreateInMultiAzIsSet_;
    int32_t count_;
    bool countIsSet_;
    std::vector<PostPaidServerDataVolume> dataVolumes_;
    bool dataVolumesIsSet_;
    PostPaidServerExtendParam extendparam_;
    bool extendparamIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;
    std::string imageRef_;
    bool imageRefIsSet_;
    bool isAutoRename_;
    bool isAutoRenameIsSet_;
    std::string keyName_;
    bool keyNameIsSet_;
    std::map<std::string, std::string> metadata_;
    bool metadataIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::vector<PostPaidServerNic> nics_;
    bool nicsIsSet_;
    PostPaidServerSchedulerHints osSchedulerHints_;
    bool osSchedulerHintsIsSet_;
    PostPaidServerPublicip publicip_;
    bool publicipIsSet_;
    PostPaidServerRootVolume rootVolume_;
    bool rootVolumeIsSet_;
    std::vector<PostPaidServerSecurityGroup> securityGroups_;
    bool securityGroupsIsSet_;
    std::vector<PostPaidServerTag> serverTags_;
    bool serverTagsIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::string userData_;
    bool userDataIsSet_;
    std::string vpcid_;
    bool vpcidIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    CpuOptions cpuOptions_;
    bool cpuOptionsIsSet_;
    SecurityOptions securityOptions_;
    bool securityOptionsIsSet_;
    SerialConsoleOptions serialConsoleOptions_;
    bool serialConsoleOptionsIsSet_;
    UpdateServerMetadataOptionsRequestBody metadataOptions_;
    bool metadataOptionsIsSet_;
    EnclaveOptions enclaveOptions_;
    bool enclaveOptionsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServer_H_
