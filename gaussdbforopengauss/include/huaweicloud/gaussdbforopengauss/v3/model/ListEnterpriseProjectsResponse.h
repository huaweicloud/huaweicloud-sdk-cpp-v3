
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnterpriseProjectsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnterpriseProjectsResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/EnterpriseProjectInfoResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListEnterpriseProjectsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEnterpriseProjectsResponse();
    virtual ~ListEnterpriseProjectsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnterpriseProjectsResponse members

    /// <summary>
    /// **参数解释**: 企业项目列表。
    /// </summary>

    std::vector<EnterpriseProjectInfoResult>& getEnterpriseProjects();
    bool enterpriseProjectsIsSet() const;
    void unsetenterpriseProjects();
    void setEnterpriseProjects(const std::vector<EnterpriseProjectInfoResult>& value);

    /// <summary>
    /// **参数解释**: 企业项目总数。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<EnterpriseProjectInfoResult> enterpriseProjects_;
    bool enterpriseProjectsIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListEnterpriseProjectsResponse_H_
