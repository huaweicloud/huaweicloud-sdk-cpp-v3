
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_Point_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_Point_H_


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
class HUAWEICLOUD_AAD_V2_EXPORT  Point
    : public ModelBase
{
public:
    Point();
    virtual ~Point();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Point members

    /// <summary>
    /// 时间戳
    /// </summary>

    int32_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int32_t value);

    /// <summary>
    /// 请求总量
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 攻击总量
    /// </summary>

    int32_t getAttack() const;
    bool attackIsSet() const;
    void unsetattack();
    void setAttack(int32_t value);

    /// <summary>
    /// web基础防护
    /// </summary>

    int32_t getBasic() const;
    bool basicIsSet() const;
    void unsetbasic();
    void setBasic(int32_t value);

    /// <summary>
    /// 频率控制
    /// </summary>

    int32_t getCc() const;
    bool ccIsSet() const;
    void unsetcc();
    void setCc(int32_t value);

    /// <summary>
    /// 精准防护
    /// </summary>

    int32_t getCustomCustom() const;
    bool customCustomIsSet() const;
    void unsetcustomCustom();
    void setCustomCustom(int32_t value);


protected:
    int32_t time_;
    bool timeIsSet_;
    int32_t total_;
    bool totalIsSet_;
    int32_t attack_;
    bool attackIsSet_;
    int32_t basic_;
    bool basicIsSet_;
    int32_t cc_;
    bool ccIsSet_;
    int32_t customCustom_;
    bool customCustomIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_Point_H_
