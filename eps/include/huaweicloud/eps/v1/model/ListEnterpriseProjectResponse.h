
#ifndef HUAWEICLOUD_SDK_EPS_V1_MODEL_ListEnterpriseProjectResponse_H_
#define HUAWEICLOUD_SDK_EPS_V1_MODEL_ListEnterpriseProjectResponse_H_


#include <huaweicloud/eps/v1/EpsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eps/v1/model/EpDetail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EPS_V1_EXPORT  ListEnterpriseProjectResponse
    : public ModelBase, public HttpResponse
{
public:
    ListEnterpriseProjectResponse();
    virtual ~ListEnterpriseProjectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListEnterpriseProjectResponse members

    /// <summary>
    /// 企业项目列表
    /// </summary>

    std::vector<EpDetail>& getEnterpriseProjects();
    bool enterpriseProjectsIsSet() const;
    void unsetenterpriseProjects();
    void setEnterpriseProjects(const std::vector<EpDetail>& value);

    /// <summary>
    /// 企业项目总数
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<EpDetail> enterpriseProjects_;
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

#endif // HUAWEICLOUD_SDK_EPS_V1_MODEL_ListEnterpriseProjectResponse_H_
