
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgTypeEnum_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgTypeEnum_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_MODELARTS_V1_EXPORT  OperatorArgTypeEnum
: public ModelBase
{
public:
    OperatorArgTypeEnum();
    virtual ~OperatorArgTypeEnum();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eOperatorArgTypeEnum 
    {
        OperatorArgTypeEnum_INT,
        OperatorArgTypeEnum_FLOAT,
        OperatorArgTypeEnum_STRING,
        OperatorArgTypeEnum_ENUM,
        OperatorArgTypeEnum_LIST,
        OperatorArgTypeEnum_BOOLEAN,
        OperatorArgTypeEnum_LARGE_MODEL,
        OperatorArgTypeEnum_OBS,
        OperatorArgTypeEnum_LABEL_FILTER,
        OperatorArgTypeEnum_DATASET,
        OperatorArgTypeEnum_DYNAMIC_INPUT_LIST,
        OperatorArgTypeEnum_PROMPT,
        OperatorArgTypeEnum_OUTPUT_TASK_CATEGORY,
    };

    eOperatorArgTypeEnum getValue() const;
    void setValue(eOperatorArgTypeEnum const value);

protected:
    eOperatorArgTypeEnum value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_OperatorArgTypeEnum_H_
