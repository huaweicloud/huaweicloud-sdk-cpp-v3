
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateShortJobReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateShortJobReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ShortJobType.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建短任务请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateShortJobReq
    : public ModelBase
{
public:
    CreateShortJobReq();
    virtual ~CreateShortJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateShortJobReq members

    /// <summary>
    /// 
    /// </summary>

    ShortJobType getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const ShortJobType& value);

    /// <summary>
    /// 语言。 * CN: 中文 * EN: 英文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);


protected:
    ShortJobType jobType_;
    bool jobTypeIsSet_;
    std::string language_;
    bool languageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateShortJobReq_H_
