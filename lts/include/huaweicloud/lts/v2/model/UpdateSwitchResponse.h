
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSwitchResponse_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSwitchResponse_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_LTS_V2_EXPORT  UpdateSwitchResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateSwitchResponse();
    virtual ~UpdateSwitchResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSwitchResponse members

    /// <summary>
    /// 
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);


protected:
    std::string result_;
    bool resultIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_UpdateSwitchResponse_H_