
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowResourcesListResponseBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowResourcesListResponseBody_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowResourcesDetailResponseBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowResourcesListResponseBody
    : public ModelBase
{
public:
    ShowResourcesListResponseBody();
    virtual ~ShowResourcesListResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowResourcesListResponseBody members

    /// <summary>
    /// 资源列表对象
    /// </summary>

    std::vector<ShowResourcesDetailResponseBody>& getResources();
    bool resourcesIsSet() const;
    void unsetresources();
    void setResources(const std::vector<ShowResourcesDetailResponseBody>& value);


protected:
    std::vector<ShowResourcesDetailResponseBody> resources_;
    bool resourcesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowResourcesListResponseBody_H_
