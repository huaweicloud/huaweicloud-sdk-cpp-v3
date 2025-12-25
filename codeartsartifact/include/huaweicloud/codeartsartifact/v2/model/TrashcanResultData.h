
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_TrashcanResultData_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_TrashcanResultData_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  TrashcanResultData
    : public ModelBase
{
public:
    TrashcanResultData();
    virtual ~TrashcanResultData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TrashcanResultData members

    /// <summary>
    /// **参数解释**： 成功数目。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getSuccessNum() const;
    bool successNumIsSet() const;
    void unsetsuccessNum();
    void setSuccessNum(int32_t value);

    /// <summary>
    /// **参数解释**： 失败数目。 **取值范围**： 不涉及。 
    /// </summary>

    int32_t getFailedNum() const;
    bool failedNumIsSet() const;
    void unsetfailedNum();
    void setFailedNum(int32_t value);

    /// <summary>
    /// **参数解释**： 失败原因。 **取值范围**： 不涉及。 
    /// </summary>

    std::vector<std::string>& getFailedMessages();
    bool failedMessagesIsSet() const;
    void unsetfailedMessages();
    void setFailedMessages(const std::vector<std::string>& value);


protected:
    int32_t successNum_;
    bool successNumIsSet_;
    int32_t failedNum_;
    bool failedNumIsSet_;
    std::vector<std::string> failedMessages_;
    bool failedMessagesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_TrashcanResultData_H_
