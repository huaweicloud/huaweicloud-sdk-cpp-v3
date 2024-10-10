
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_Curve_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_Curve_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  Curve
    : public ModelBase
{
public:
    Curve();
    virtual ~Curve();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Curve members

    /// <summary>
    /// 入带宽
    /// </summary>

    float getIn() const;
    bool inIsSet() const;
    void unsetin();
    void setIn(float value);

    /// <summary>
    /// 出带宽
    /// </summary>

    float getOut() const;
    bool outIsSet() const;
    void unsetout();
    void setOut(float value);

    /// <summary>
    /// 时间戳
    /// </summary>

    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);


protected:
    float in_;
    bool inIsSet_;
    float out_;
    bool outIsSet_;
    int32_t time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_Curve_H_
