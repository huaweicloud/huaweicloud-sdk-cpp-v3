
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryAllSearchCriteriasResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryAllSearchCriteriasResponse_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/Search_criteriasBody.h>
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
class HUAWEICLOUD_LTS_V2_EXPORT  ListQueryAllSearchCriteriasResponse
    : public ModelBase, public HttpResponse
{
public:
    ListQueryAllSearchCriteriasResponse();
    virtual ~ListQueryAllSearchCriteriasResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListQueryAllSearchCriteriasResponse members

    /// <summary>
    /// 快速查询
    /// </summary>

    std::vector<Search_criteriasBody>& getSearchCriterias();
    bool searchCriteriasIsSet() const;
    void unsetsearchCriterias();
    void setSearchCriterias(const std::vector<Search_criteriasBody>& value);


protected:
    std::vector<Search_criteriasBody> searchCriterias_;
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

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ListQueryAllSearchCriteriasResponse_H_
