
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateRangeSwitchRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateRangeSwitchRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v1/model/RangeStatusRequest.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  UpdateRangeSwitchRequest
    : public ModelBase
{
public:
    UpdateRangeSwitchRequest();
    virtual ~UpdateRangeSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateRangeSwitchRequest members

    /// <summary>
    /// 当用户开启企业项目功能时，该参数生效，表示修改当前企业项目下加速域名的配置，\&quot;all\&quot;代表所有项目。注意：当使用子帐号调用接口时，该参数必传。  您可以通过调用企业项目管理服务（EPS）的查询企业项目列表接口（ListEnterpriseProject）查询企业项目id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 加速域名id。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RangeStatusRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RangeStatusRequest& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    RangeStatusRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRangeSwitchRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRangeSwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_UpdateRangeSwitchRequest_H_
