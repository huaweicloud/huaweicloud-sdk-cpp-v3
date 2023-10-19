
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListEnterpriseProjectsResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListEnterpriseProjectsResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/EnterpriseProjectItem.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListEnterpriseProjectsResponse
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
    /// 企业项目信息列表。
    /// </summary>

    std::vector<EnterpriseProjectItem>& getEnterpriseProjects();
    bool enterpriseProjectsIsSet() const;
    void unsetenterpriseProjects();
    void setEnterpriseProjects(const std::vector<EnterpriseProjectItem>& value);

    /// <summary>
    /// 总数。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<EnterpriseProjectItem> enterpriseProjects_;
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

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListEnterpriseProjectsResponse_H_
