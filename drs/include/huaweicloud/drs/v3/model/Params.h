
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_Params_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_Params_H_

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
/// 数据参数信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  Params
    : public ModelBase
{
public:
    Params();
    virtual ~Params();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Params members

    /// <summary>
    /// 参数对比结果
    /// </summary>

    std::string getCompareResult() const;
    bool compareResultIsSet() const;
    void unsetcompareResult();
    void setCompareResult(const std::string& value);

    /// <summary>
    /// 参数类型
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 分组。 - common-常规参数 - performance-性能参数
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 参数名
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 是否需要重启
    /// </summary>

    std::string getNeedRestart() const;
    bool needRestartIsSet() const;
    void unsetneedRestart();
    void setNeedRestart(const std::string& value);

    /// <summary>
    /// 源数据库参数值
    /// </summary>

    std::string getSourceValue() const;
    bool sourceValueIsSet() const;
    void unsetsourceValue();
    void setSourceValue(const std::string& value);

    /// <summary>
    /// 目标数据库参数值
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);

    /// <summary>
    /// 参数范围
    /// </summary>

    std::string getValueRange() const;
    bool valueRangeIsSet() const;
    void unsetvalueRange();
    void setValueRange(const std::string& value);

    /// <summary>
    /// 错误码
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);

    /// <summary>
    /// 错误信息
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string compareResult_;
    bool compareResultIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string group_;
    bool groupIsSet_;
    std::string key_;
    bool keyIsSet_;
    std::string needRestart_;
    bool needRestartIsSet_;
    std::string sourceValue_;
    bool sourceValueIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;
    std::string valueRange_;
    bool valueRangeIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_Params_H_
