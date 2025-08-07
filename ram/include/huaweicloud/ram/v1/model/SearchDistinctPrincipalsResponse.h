
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctPrincipalsResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctPrincipalsResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <vector>
#include <huaweicloud/ram/v1/model/DistinctSharedPrincipal.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  SearchDistinctPrincipalsResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchDistinctPrincipalsResponse();
    virtual ~SearchDistinctPrincipalsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchDistinctPrincipalsResponse members

    /// <summary>
    /// 不同角色的信息列表。
    /// </summary>

    std::vector<DistinctSharedPrincipal>& getDistinctSharedPrincipals();
    bool distinctSharedPrincipalsIsSet() const;
    void unsetdistinctSharedPrincipals();
    void setDistinctSharedPrincipals(const std::vector<DistinctSharedPrincipal>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<DistinctSharedPrincipal> distinctSharedPrincipals_;
    bool distinctSharedPrincipalsIsSet_;
    PageInfo pageInfo_;
    bool pageInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchDistinctPrincipalsResponse_H_
