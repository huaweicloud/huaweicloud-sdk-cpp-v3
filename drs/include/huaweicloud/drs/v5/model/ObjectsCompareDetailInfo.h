
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareDetailInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareDetailInfo_H_

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
/// 对象级对比详情信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ObjectsCompareDetailInfo
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
    /// 源库对比值。
    /// </summary>

    std::string getSourceDbValue() const;
    bool sourceDbValueIsSet() const;
    void unsetsourceDbValue();
    void setSourceDbValue(const std::string& value);

    /// <summary>
    /// 目标库对比值。
    /// </summary>

    std::string getTargetDbValue() const;
    bool targetDbValueIsSet() const;
    void unsettargetDbValue();
    void setTargetDbValue(const std::string& value);

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
    /// 失败原因。
    /// </summary>

    std::string getErrorMessage() const;
    bool errorMessageIsSet() const;
    void unseterrorMessage();
    void setErrorMessage(const std::string& value);


protected:
    std::string sourceDbValue_;
    bool sourceDbValueIsSet_;
    std::string targetDbValue_;
    bool targetDbValueIsSet_;
    std::string sourceDbName_;
    bool sourceDbNameIsSet_;
    std::string targetDbName_;
    bool targetDbNameIsSet_;
    std::string errorMessage_;
    bool errorMessageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ObjectsCompareDetailInfo_H_
