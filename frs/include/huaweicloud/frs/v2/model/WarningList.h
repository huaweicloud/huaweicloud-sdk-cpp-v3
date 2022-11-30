
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_WarningList_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_WarningList_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  WarningList
    : public ModelBase
{
public:
    WarningList();
    virtual ~WarningList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WarningList members

    /// <summary>
    /// 警告ID。
    /// </summary>

    int32_t getWarningCode() const;
    bool warningCodeIsSet() const;
    void unsetwarningCode();
    void setWarningCode(int32_t value);

    /// <summary>
    /// 告警消息。
    /// </summary>

    std::string getWarningMsg() const;
    bool warningMsgIsSet() const;
    void unsetwarningMsg();
    void setWarningMsg(const std::string& value);


protected:
    int32_t warningCode_;
    bool warningCodeIsSet_;
    std::string warningMsg_;
    bool warningMsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_WarningList_H_
