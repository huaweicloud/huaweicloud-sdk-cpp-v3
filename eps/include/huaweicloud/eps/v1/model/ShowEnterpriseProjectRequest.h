
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectRequest_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectRequest_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ShowEnterpriseProjectRequest
    : public ModelBase
{
public:
    ShowEnterpriseProjectRequest();
    virtual ~ShowEnterpriseProjectRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEnterpriseProjectRequest members

    /// <summary>
    /// 企业项目ID。 可以通过查询企业项目列表接口获取。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEnterpriseProjectRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEnterpriseProjectRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ShowEnterpriseProjectRequest_H_
