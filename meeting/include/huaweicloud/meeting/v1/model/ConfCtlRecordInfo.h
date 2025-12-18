
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConfCtlRecordInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConfCtlRecordInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会控操作信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ConfCtlRecordInfo
    : public ModelBase
{
public:
    ConfCtlRecordInfo();
    virtual ~ConfCtlRecordInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConfCtlRecordInfo members

    /// <summary>
    /// 操作时间（UTC时间，单位毫秒）。
    /// </summary>

    int64_t getOperateTime() const;
    bool operateTimeIsSet() const;
    void unsetoperateTime();
    void setOperateTime(int64_t value);

    /// <summary>
    /// 操作来源。
    /// </summary>

    std::string getOperateSource() const;
    bool operateSourceIsSet() const;
    void unsetoperateSource();
    void setOperateSource(const std::string& value);

    /// <summary>
    /// 操作者。
    /// </summary>

    std::string getOperator() const;
    bool operatorIsSet() const;
    void unsetoperator();
    void setOperator(const std::string& value);

    /// <summary>
    /// 操作描述。
    /// </summary>

    std::string getOperateCode() const;
    bool operateCodeIsSet() const;
    void unsetoperateCode();
    void setOperateCode(const std::string& value);

    /// <summary>
    /// 被操作对象。
    /// </summary>

    std::string getOperationObject() const;
    bool operationObjectIsSet() const;
    void unsetoperationObject();
    void setOperationObject(const std::string& value);

    /// <summary>
    /// 操作结果。
    /// </summary>

    std::string getOperateResult() const;
    bool operateResultIsSet() const;
    void unsetoperateResult();
    void setOperateResult(const std::string& value);

    /// <summary>
    /// 详情。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);


protected:
    int64_t operateTime_;
    bool operateTimeIsSet_;
    std::string operateSource_;
    bool operateSourceIsSet_;
    std::string operator_;
    bool operatorIsSet_;
    std::string operateCode_;
    bool operateCodeIsSet_;
    std::string operationObject_;
    bool operationObjectIsSet_;
    std::string operateResult_;
    bool operateResultIsSet_;
    std::string detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ConfCtlRecordInfo_H_
