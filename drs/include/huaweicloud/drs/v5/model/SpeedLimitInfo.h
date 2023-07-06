
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SpeedLimitInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SpeedLimitInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 限速信息体。 - 限速：自定义的最大迁移速度，迁移过程中的迁移速度将不会超过该速度。 - 不限速：对迁移速度不进行限制，通常会最大化使用源数据库的出口带宽。该流速模式同时会对源数据库造成读消耗，消耗取决于源数据库的出口带宽。比如：源数据库的出口带宽为100MB/s，假设高速模式使用了80%带宽，则迁移对源数据库将造成80MB/s的读操作IO消耗。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SpeedLimitInfo
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
    /// 开始限速时间，此时间为UTC时间，开始时间为整时，若有分钟，则会忽略，格式为hh:mm，小时数为两位，例如：01:00。
    /// </summary>

    std::string getBegin() const;
    bool beginIsSet() const;
    void unsetbegin();
    void setBegin(const std::string& value);

    /// <summary>
    /// 结束时间，此时间为UTC时间，输入必须为59分结尾，格式为hh:mm，例如：15:59。
    /// </summary>

    std::string getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(const std::string& value);

    /// <summary>
    /// 限速值，取值范围为1~9999，单位为MB/s。
    /// </summary>

    std::string getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(const std::string& value);


protected:
    std::string begin_;
    bool beginIsSet_;
    std::string end_;
    bool endIsSet_;
    std::string speed_;
    bool speedIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SpeedLimitInfo_H_
