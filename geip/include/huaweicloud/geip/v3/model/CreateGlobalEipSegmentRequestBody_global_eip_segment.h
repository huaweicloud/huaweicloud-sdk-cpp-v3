
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipSegmentRequestBody_global_eip_segment_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipSegmentRequestBody_global_eip_segment_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth.h>
#include <string>
#include <vector>
#include <huaweicloud/geip/v3/model/CreateGlobalEipRequestBody_global_eip_tags.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建全域弹性公网IP段请求对象信息
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateGlobalEipSegmentRequestBody_global_eip_segment
    : public ModelBase
{
public:
    CreateGlobalEipSegmentRequestBody_global_eip_segment();
    virtual ~CreateGlobalEipSegmentRequestBody_global_eip_segment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGlobalEipSegmentRequestBody_global_eip_segment members

    /// <summary>
    /// - 功能说明：全域弹性公网IP段名称 - 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// - 功能说明：用户自定义的资源描述 - 约束：   - 值的长度最大512字符，由数字、字母、中文、_(下划线)、-（中划线）、.（点）组成。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP池子名称
    /// </summary>

    std::string getGeipPoolName() const;
    bool geipPoolNameIsSet() const;
    void unsetgeipPoolName();
    void setGeipPoolName(const std::string& value);

    /// <summary>
    /// 接入点信息
    /// </summary>

    std::string getAccessSite() const;
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::string& value);

    /// <summary>
    /// 掩码长度。取值范围由GET /v3/{domain_id}/global-eip-segments/support-masks接口提供
    /// </summary>

    int32_t getMask() const;
    bool maskIsSet() const;
    void unsetmask();
    void setMask(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth getInternetBandwidth() const;
    bool internetBandwidthIsSet() const;
    void unsetinternetBandwidth();
    void setInternetBandwidth(const CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth& value);

    /// <summary>
    /// 全域弹性公网IP段标签
    /// </summary>

    std::vector<CreateGlobalEipRequestBody_global_eip_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value);

    /// <summary>
    /// - 企业项目ID。最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。 - 创建全域弹性公网IP时，给全域弹性公网IP绑定企业项目ID。 - 不指定该参数时，默认值是 0 - 关于企业项目ID的获取及企业项目特性的详细信息，请参见[《企业管理用户指南》](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0126101490.html)。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string geipPoolName_;
    bool geipPoolNameIsSet_;
    std::string accessSite_;
    bool accessSiteIsSet_;
    int32_t mask_;
    bool maskIsSet_;
    CreateGlobalEipSegmentRequestBody_global_eip_segment_internet_bandwidth internetBandwidth_;
    bool internetBandwidthIsSet_;
    std::vector<CreateGlobalEipRequestBody_global_eip_tags> tags_;
    bool tagsIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipSegmentRequestBody_global_eip_segment_H_
