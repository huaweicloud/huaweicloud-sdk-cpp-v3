
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改安抚话术请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdatePacifyWordsReq
    : public ModelBase
{
public:
    UpdatePacifyWordsReq();
    virtual ~UpdatePacifyWordsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePacifyWordsReq members

    /// <summary>
    /// 安抚话术。
    /// </summary>

    std::string getPacifyWords() const;
    bool pacifyWordsIsSet() const;
    void unsetpacifyWords();
    void setPacifyWords(const std::string& value);


protected:
    std::string pacifyWords_;
    bool pacifyWordsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdatePacifyWordsReq_H_
