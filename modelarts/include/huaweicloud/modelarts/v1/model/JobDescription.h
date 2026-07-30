
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobDescription_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobDescription_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业描述。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  JobDescription
    : public ModelBase
{
public:
    JobDescription();
    virtual ~JobDescription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobDescription members

    /// <summary>
    /// 对训练作业的描述，默认为“NULL”，字符串的长度限制为[0, 256]。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_JobDescription_H_
