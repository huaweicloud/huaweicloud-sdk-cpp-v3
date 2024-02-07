
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipRequestBody_global_eip_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipRequestBody_global_eip_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 请求体信息
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateGlobalEipRequestBody_global_eip
    : public ModelBase
{
public:
    CreateGlobalEipRequestBody_global_eip();
    virtual ~CreateGlobalEipRequestBody_global_eip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateGlobalEipRequestBody_global_eip members

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户自定义的资源描述
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
    /// 全域公网带宽的ID
    /// </summary>

    std::string getInternetBandwidthId() const;
    bool internetBandwidthIdIsSet() const;
    void unsetinternetBandwidthId();
    void setInternetBandwidthId(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP标签
    /// </summary>

    std::vector<CreateGlobalEipRequestBody_global_eip_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value);

    /// <summary>
    /// 资源的企业项目id
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
    std::string internetBandwidthId_;
    bool internetBandwidthIdIsSet_;
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateGlobalEipRequestBody_global_eip_H_
