
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_SpeedLimitInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_SpeedLimitInfo_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 限制迁移速度请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  SpeedLimitInfo
    : public ModelBase
{
public:
    SpeedLimitInfo();
    virtual ~SpeedLimitInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SpeedLimitInfo members

    /// <summary>
    /// 开始限速时间, 此时间为UTC时间，开始时间为整时，若有分钟，则会忽略，格式为hh:mm，小时数为两位，例如：01:00。
    /// </summary>

    std::string getBegin() const;
    bool beginIsSet() const;
    void unsetbegin();
    void setBegin(const std::string& value);

    /// <summary>
    /// 结束时间,此时间为UTC时间,输入必须为59分结尾，格式为hh:mm，小时数为两位，例如：05:59。
    /// </summary>

    std::string getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(const std::string& value);

    /// <summary>
    /// 限速，取值范围为1~9999 ,单位为MB/s
    /// </summary>

    std::string getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(const std::string& value);

    /// <summary>
    /// 是否为UTC时间
    /// </summary>

    bool isIsUtc() const;
    bool isUtcIsSet() const;
    void unsetisUtc();
    void setIsUtc(bool value);


protected:
    std::string begin_;
    bool beginIsSet_;
    std::string end_;
    bool endIsSet_;
    std::string speed_;
    bool speedIsSet_;
    bool isUtc_;
    bool isUtcIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_SpeedLimitInfo_H_
