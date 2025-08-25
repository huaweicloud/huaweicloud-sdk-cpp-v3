
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterMetadata_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterMetadata_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 支持通过 annotations[\&quot;cluster.install.addons/install\&quot;] 来指定创建集群时需要安装的插件
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AutopilotClusterMetadata
    : public ModelBase
{
public:
    AutopilotClusterMetadata();
    virtual ~AutopilotClusterMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutopilotClusterMetadata members

    /// <summary>
    /// 集群名称。  命名规则：以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围4-128位，且不能以中划线(-)结尾。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 集群ID，资源唯一标识，创建成功后自动生成，填写无效。在创建包周期集群时，响应体不返回集群ID。
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 集群显示名，用于在 CCE 界面显示，该名称创建后可修改。  命名规则：以小写字母开头，由小写字母、数字、中划线(-)组成，长度范围4-128位，且不能以中划线(-)结尾。  显示名和其他集群的名称、显示名不可以重复。  在创建集群、更新集群请求体中，集群显示名alias未指定或取值为空，表示与集群名称name一致。在查询集群等响应体中，集群显示名alias将必然返回，未配置时将返回集群名称name。
    /// </summary>

    std::string getAlias() const;
    bool aliasIsSet() const;
    void unsetalias();
    void setAlias(const std::string& value);

    /// <summary>
    /// 集群注解，由key/value组成：  &#x60;&#x60;&#x60; \&quot;annotations\&quot;: {    \&quot;key1\&quot; : \&quot;value1\&quot;,    \&quot;key2\&quot; : \&quot;value2\&quot; } &#x60;&#x60;&#x60;  &gt;    - Annotations不用于标识和选择对象。Annotations中的元数据可以是small或large，structured或unstructured，并且可以包括标签不允许使用的字符。 &gt;    - 该字段不会被数据库保存，当前仅用于指定集群待安装插件。 
    /// </summary>

    std::map<std::string, std::string>& getAnnotations();
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 集群标签，key/value对格式。  &gt;  该字段值由系统自动生成，用于升级时前端识别集群支持的特性开关，用户指定无效。
    /// </summary>

    std::map<std::string, std::string>& getLabels();
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 集群创建时间
    /// </summary>

    std::string getCreationTimestamp() const;
    bool creationTimestampIsSet() const;
    void unsetcreationTimestamp();
    void setCreationTimestamp(const std::string& value);

    /// <summary>
    /// 集群更新时间
    /// </summary>

    std::string getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string alias_;
    bool aliasIsSet_;
    std::map<std::string, std::string> annotations_;
    bool annotationsIsSet_;
    std::map<std::string, std::string> labels_;
    bool labelsIsSet_;
    std::string creationTimestamp_;
    bool creationTimestampIsSet_;
    std::string updateTimestamp_;
    bool updateTimestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AutopilotClusterMetadata_H_
