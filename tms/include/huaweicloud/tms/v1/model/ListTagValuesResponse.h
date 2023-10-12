
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagValuesResponse_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagValuesResponse_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/PageInfoTagValues.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ListTagValuesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTagValuesResponse();
    virtual ~ListTagValuesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTagValuesResponse members

    /// <summary>
    /// 查询到的标签值列表
    /// </summary>

    std::vector<std::string>& getValues();
    bool valuesIsSet() const;
    void unsetvalues();
    void setValues(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    PageInfoTagValues getPageInfo() const;
    bool pageInfoIsSet() const;
    void unsetpageInfo();
    void setPageInfo(const PageInfoTagValues& value);


protected:
    std::vector<std::string> values_;
    bool valuesIsSet_;
    PageInfoTagValues pageInfo_;
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

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ListTagValuesResponse_H_
