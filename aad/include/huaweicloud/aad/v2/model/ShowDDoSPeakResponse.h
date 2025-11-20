
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDDoSPeakResponse_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDDoSPeakResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  ShowDDoSPeakResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDDoSPeakResponse();
    virtual ~ShowDDoSPeakResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDDoSPeakResponse members

    /// <summary>
    /// 攻击流量
    /// </summary>

    int32_t getAttackKbytesTotal() const;
    bool attackKbytesTotalIsSet() const;
    void unsetattackKbytesTotal();
    void setAttackKbytesTotal(int32_t value);

    /// <summary>
    /// 攻击流量峰值包速率
    /// </summary>

    int32_t getAttackPpsPeak() const;
    bool attackPpsPeakIsSet() const;
    void unsetattackPpsPeak();
    void setAttackPpsPeak(int32_t value);

    /// <summary>
    /// 入流量峰值包速率
    /// </summary>

    int32_t getInPpsPeak() const;
    bool inPpsPeakIsSet() const;
    void unsetinPpsPeak();
    void setInPpsPeak(int32_t value);

    /// <summary>
    /// 攻击流量峰值
    /// </summary>

    int32_t getAttackBpsPeak() const;
    bool attackBpsPeakIsSet() const;
    void unsetattackBpsPeak();
    void setAttackBpsPeak(int32_t value);

    /// <summary>
    /// 入流量峰值
    /// </summary>

    int32_t getInBpsPeak() const;
    bool inBpsPeakIsSet() const;
    void unsetinBpsPeak();
    void setInBpsPeak(int32_t value);

    /// <summary>
    /// 攻击数量
    /// </summary>

    int32_t getDdosCount() const;
    bool ddosCountIsSet() const;
    void unsetddosCount();
    void setDdosCount(int32_t value);

    /// <summary>
    /// 峰值时间
    /// </summary>

    int32_t getUtime() const;
    bool utimeIsSet() const;
    void unsetutime();
    void setUtime(int32_t value);


protected:
    int32_t attackKbytesTotal_;
    bool attackKbytesTotalIsSet_;
    int32_t attackPpsPeak_;
    bool attackPpsPeakIsSet_;
    int32_t inPpsPeak_;
    bool inPpsPeakIsSet_;
    int32_t attackBpsPeak_;
    bool attackBpsPeakIsSet_;
    int32_t inBpsPeak_;
    bool inBpsPeakIsSet_;
    int32_t ddosCount_;
    bool ddosCountIsSet_;
    int32_t utime_;
    bool utimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_ShowDDoSPeakResponse_H_
