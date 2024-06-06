
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AutoScalingRecordInfo_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AutoScalingRecordInfo_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  AutoScalingRecordInfo
    : public ModelBase
{
public:
    AutoScalingRecordInfo();
    virtual ~AutoScalingRecordInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AutoScalingRecordInfo members

    /// <summary>
    /// 记录ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 变配类型。
    /// </summary>

    std::string getScalingType() const;
    bool scalingTypeIsSet() const;
    void unsetscalingType();
    void setScalingType(const std::string& value);

    /// <summary>
    /// 原始值。
    /// </summary>

    std::string getOriginalValue() const;
    bool originalValueIsSet() const;
    void unsetoriginalValue();
    void setOriginalValue(const std::string& value);

    /// <summary>
    /// 目标值。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);

    /// <summary>
    /// 变配结果。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 变配时间。
    /// </summary>

    std::string getCreateAt() const;
    bool createAtIsSet() const;
    void unsetcreateAt();
    void setCreateAt(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::string scalingType_;
    bool scalingTypeIsSet_;
    std::string originalValue_;
    bool originalValueIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string createAt_;
    bool createAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_AutoScalingRecordInfo_H_
