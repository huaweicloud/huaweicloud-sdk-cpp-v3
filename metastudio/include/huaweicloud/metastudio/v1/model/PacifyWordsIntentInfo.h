
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PacifyWordsIntentInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PacifyWordsIntentInfo_H_


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
/// 安抚话术意图信息。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  PacifyWordsIntentInfo
    : public ModelBase
{
public:
    PacifyWordsIntentInfo();
    virtual ~PacifyWordsIntentInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PacifyWordsIntentInfo members

    /// <summary>
    /// 意图名称
    /// </summary>

    std::string getIntent() const;
    bool intentIsSet() const;
    void unsetintent();
    void setIntent(const std::string& value);

    /// <summary>
    /// 意图中文描述
    /// </summary>

    std::string getDescCn() const;
    bool descCnIsSet() const;
    void unsetdescCn();
    void setDescCn(const std::string& value);

    /// <summary>
    /// 意图英文描述
    /// </summary>

    std::string getDescEn() const;
    bool descEnIsSet() const;
    void unsetdescEn();
    void setDescEn(const std::string& value);


protected:
    std::string intent_;
    bool intentIsSet_;
    std::string descCn_;
    bool descCnIsSet_;
    std::string descEn_;
    bool descEnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_PacifyWordsIntentInfo_H_
