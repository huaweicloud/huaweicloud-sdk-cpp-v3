
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_HttpCode_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_HttpCode_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  HttpCode
    : public ModelBase
{
public:
    HttpCode();
    virtual ~HttpCode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpCode members

    /// <summary>
    /// 状态码
    /// </summary>

    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);

    /// <summary>
    /// 状态码出现次数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 状态码在对应时间点中的占比，保留4位小数。 
    /// </summary>

    double getProportion() const;
    bool proportionIsSet() const;
    void unsetproportion();
    void setProportion(double value);


protected:
    int32_t code_;
    bool codeIsSet_;
    int32_t count_;
    bool countIsSet_;
    double proportion_;
    bool proportionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_HttpCode_H_
