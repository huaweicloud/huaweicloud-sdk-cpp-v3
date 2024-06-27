
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorClassification_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorClassification_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 回放异常SQL分类数据项
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ReplayErrorClassification
    : public ModelBase
{
public:
    ReplayErrorClassification();
    virtual ~ReplayErrorClassification();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplayErrorClassification members

    /// <summary>
    /// 目标库标识
    /// </summary>

    std::string getTargetName() const;
    bool targetNameIsSet() const;
    void unsettargetName();
    void setTargetName(const std::string& value);

    /// <summary>
    /// 异常SQL分类
    /// </summary>

    std::string getErrorType() const;
    bool errorTypeIsSet() const;
    void unseterrorType();
    void setErrorType(const std::string& value);

    /// <summary>
    /// 异常SQL数量
    /// </summary>

    std::string getErrorCnt() const;
    bool errorCntIsSet() const;
    void unseterrorCnt();
    void setErrorCnt(const std::string& value);

    /// <summary>
    /// 异常SQL模板数量
    /// </summary>

    std::string getErrorTemplateCnt() const;
    bool errorTemplateCntIsSet() const;
    void unseterrorTemplateCnt();
    void setErrorTemplateCnt(const std::string& value);


protected:
    std::string targetName_;
    bool targetNameIsSet_;
    std::string errorType_;
    bool errorTypeIsSet_;
    std::string errorCnt_;
    bool errorCntIsSet_;
    std::string errorTemplateCnt_;
    bool errorTemplateCntIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ReplayErrorClassification_H_
