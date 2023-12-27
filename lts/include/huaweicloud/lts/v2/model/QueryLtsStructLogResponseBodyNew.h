
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogResponseBodyNew_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogResponseBodyNew_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 此参数在请求实体中，采用json字符串格式。
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  QueryLtsStructLogResponseBodyNew
    : public ModelBase
{
public:
    QueryLtsStructLogResponseBodyNew();
    virtual ~QueryLtsStructLogResponseBodyNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryLtsStructLogResponseBodyNew members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_QueryLtsStructLogResponseBodyNew_H_
