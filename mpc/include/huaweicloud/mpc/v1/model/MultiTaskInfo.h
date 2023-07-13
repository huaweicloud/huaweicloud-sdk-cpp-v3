
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiTaskInfo_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiTaskInfo_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/mpc/v1/model/ErrorResponse.h>
#include <huaweicloud/mpc/v1/model/SourceInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  MultiTaskInfo
    : public ModelBase
{
public:
    MultiTaskInfo();
    virtual ~MultiTaskInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MultiTaskInfo members

    /// <summary>
    /// 转码模板ID。
    /// </summary>

    int32_t getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const ErrorResponse& value);

    /// <summary>
    /// 
    /// </summary>

    SourceInfo getOutputFile() const;
    bool outputFileIsSet() const;
    void unsetoutputFile();
    void setOutputFile(const SourceInfo& value);


protected:
    int32_t templateId_;
    bool templateIdIsSet_;
    ErrorResponse error_;
    bool errorIsSet_;
    SourceInfo outputFile_;
    bool outputFileIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_MultiTaskInfo_H_
