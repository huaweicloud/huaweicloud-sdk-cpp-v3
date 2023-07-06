
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_PrecheckFailSubJobResult_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_PrecheckFailSubJobResult_H_

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
/// 失败子任务详情。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  PrecheckFailSubJobResult
    : public ModelBase
{
public:
    PrecheckFailSubJobResult();
    virtual ~PrecheckFailSubJobResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrecheckFailSubJobResult members

    /// <summary>
    /// 子任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 子任务名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 子任务检查结果。
    /// </summary>

    std::string getCheckResult() const;
    bool checkResultIsSet() const;
    void unsetcheckResult();
    void setCheckResult(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string checkResult_;
    bool checkResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_PrecheckFailSubJobResult_H_
