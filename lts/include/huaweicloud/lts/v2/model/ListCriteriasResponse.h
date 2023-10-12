
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListCriteriasResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListCriteriasResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/GetQuerySearchCriteriasBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ListCriteriasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCriteriasResponse();
    virtual ~ListCriteriasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCriteriasResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<GetQuerySearchCriteriasBody>& getSearchCriterias();
    bool searchCriteriasIsSet() const;
    void unsetsearchCriterias();
    void setSearchCriterias(const std::vector<GetQuerySearchCriteriasBody>& value);


protected:
    std::vector<GetQuerySearchCriteriasBody> searchCriterias_;
    bool searchCriteriasIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListCriteriasResponse_H_
