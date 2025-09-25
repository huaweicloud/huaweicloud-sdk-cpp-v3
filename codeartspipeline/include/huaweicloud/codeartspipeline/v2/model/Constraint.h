
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Constraint_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Constraint_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 任务参数校验参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Constraint
    : public ModelBase
{
public:
    Constraint();
    virtual ~Constraint();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Constraint members

    /// <summary>
    /// 校验规则类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 校验规则
    /// </summary>

    std::string getValue() const;
    bool valueIsSet() const;
    void unsetvalue();
    void setValue(const std::string& value);

    /// <summary>
    /// 校验失败描述
    /// </summary>

    std::string getErrormsg() const;
    bool errormsgIsSet() const;
    void unseterrormsg();
    void setErrormsg(const std::string& value);


protected:
    std::string type_;
    bool typeIsSet_;
    std::string value_;
    bool valueIsSet_;
    std::string errormsg_;
    bool errormsgIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Constraint_H_
