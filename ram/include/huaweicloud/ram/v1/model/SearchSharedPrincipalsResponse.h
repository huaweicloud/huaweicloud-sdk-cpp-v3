
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedPrincipalsResponse_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedPrincipalsResponse_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/PageInfo.h>
#include <huaweicloud/ram/v1/model/SharedPrincipal.h>
#include <vector>

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
class HUAWEICLOUD_RAM_V1_EXPORT  SearchSharedPrincipalsResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchSharedPrincipalsResponse();
    virtual ~SearchSharedPrincipalsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchSharedPrincipalsResponse members

    /// <summary>
    /// 资源使用者的详细信息列表。
    /// </summary>

    std::vector<SharedPrincipal>& getSharedPrincipals();
    bool sharedPrincipalsIsSet() const;
    void unsetsharedPrincipals();
    void setSharedPrincipals(const std::vector<SharedPrincipal>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfo getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfo& value);


protected:
    std::vector<SharedPrincipal> sharedPrincipals_;
    bool sharedPrincipalsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_SearchSharedPrincipalsResponse_H_
