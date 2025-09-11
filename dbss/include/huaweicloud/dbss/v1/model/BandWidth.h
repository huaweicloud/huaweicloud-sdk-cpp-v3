
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_BandWidth_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_BandWidth_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 带宽参数
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  BandWidth
    : public ModelBase
{
public:
    BandWidth();
    virtual ~BandWidth();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BandWidth members

    /// <summary>
    /// 计费类型
    /// </summary>

    std::string getChargemode() const;
    bool chargemodeIsSet() const;
    void unsetchargemode();
    void setChargemode(const std::string& value);

    /// <summary>
    /// 带宽对应产品ID
    /// </summary>

    std::string getProductid() const;
    bool productidIsSet() const;
    void unsetproductid();
    void setProductid(const std::string& value);

    /// <summary>
    /// 共享类型，目前仅支持PER
    /// </summary>

    std::string getSharetype() const;
    bool sharetypeIsSet() const;
    void unsetsharetype();
    void setSharetype(const std::string& value);

    /// <summary>
    /// 带宽，按需1-100M，包年包月1-300M
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);


protected:
    std::string chargemode_;
    bool chargemodeIsSet_;
    std::string productid_;
    bool productidIsSet_;
    std::string sharetype_;
    bool sharetypeIsSet_;
    int32_t size_;
    bool sizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_BandWidth_H_
