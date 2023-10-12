
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_RpoAndRtoInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_RpoAndRtoInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// RpoAndRTO信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  RpoAndRtoInfo
    : public ModelBase
{
public:
    RpoAndRtoInfo();
    virtual ~RpoAndRtoInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RpoAndRtoInfo members

    /// <summary>
    /// 检查点
    /// </summary>

    std::string getCheckPoint() const;
    bool checkPointIsSet() const;
    void unsetcheckPoint();
    void setCheckPoint(const std::string& value);

    /// <summary>
    /// 延迟
    /// </summary>

    std::string getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(const std::string& value);

    /// <summary>
    /// gtid集合
    /// </summary>

    std::string getGtidSet() const;
    bool gtidSetIsSet() const;
    void unsetgtidSet();
    void setGtidSet(const std::string& value);

    /// <summary>
    /// 当前时间 ，格式为“yyyy-MM-dd HH:mm:ss”
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);


protected:
    std::string checkPoint_;
    bool checkPointIsSet_;
    std::string delay_;
    bool delayIsSet_;
    std::string gtidSet_;
    bool gtidSetIsSet_;
    std::string time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_RpoAndRtoInfo_H_
