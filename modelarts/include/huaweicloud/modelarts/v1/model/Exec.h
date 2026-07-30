
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Exec_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Exec_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Exec
    : public ModelBase
{
public:
    Exec();
    virtual ~Exec();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Exec members

    /// <summary>
    /// **参数解释**： 命令行方式采集指标。 **取值范围**： 不涉及。
    /// </summary>

    std::vector<std::string>& getCommand();
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::vector<std::string>& value);


protected:
    std::vector<std::string> command_;
    bool commandIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Exec_H_
