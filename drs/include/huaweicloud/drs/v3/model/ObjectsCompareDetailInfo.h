
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectsCompareDetailInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectsCompareDetailInfo_H_


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
/// 对象级对比详情信息体。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ObjectsCompareDetailInfo
    : public ModelBase
{
public:
    ObjectsCompareDetailInfo();
    virtual ~ObjectsCompareDetailInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ObjectsCompareDetailInfo members

    /// <summary>
    /// 源库名称。
    /// </summary>

    std::string getSourceDbName() const;
    bool sourceDbNameIsSet() const;
    void unsetsourceDbName();
    void setSourceDbName(const std::string& value);

    /// <summary>
    /// 目标库名称。
    /// </summary>

    std::string getTargetDbName() const;
    bool targetDbNameIsSet() const;
    void unsettargetDbName();
    void setTargetDbName(const std::string& value);

    /// <summary>
    /// 在源库的值。
    /// </summary>

    std::string getSourceDbValue() const;
    bool sourceDbValueIsSet() const;
    void unsetsourceDbValue();
    void setSourceDbValue(const std::string& value);

    /// <summary>
    /// 在目标库的值。
    /// </summary>

    std::string getTargetDbValue() const;
    bool targetDbValueIsSet() const;
    void unsettargetDbValue();
    void setTargetDbValue(const std::string& value);

    /// <summary>
    /// 对比结果，0为不一致，2为一致，3为未完成。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// 错误信息。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::string targetDbName_;
    bool targetDbNameIsSet_;
    std::string sourceDbValue_;
    bool sourceDbValueIsSet_;
    std::string targetDbValue_;
    bool targetDbValueIsSet_;
    int32_t status_;
    bool statusIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ObjectsCompareDetailInfo_H_
