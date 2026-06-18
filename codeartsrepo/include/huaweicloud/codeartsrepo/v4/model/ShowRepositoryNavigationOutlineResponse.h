
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryNavigationOutlineResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryNavigationOutlineResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/SymbolNodeDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowRepositoryNavigationOutlineResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRepositoryNavigationOutlineResponse();
    virtual ~ShowRepositoryNavigationOutlineResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRepositoryNavigationOutlineResponse members

    /// <summary>
    /// **参数解释：** 结果标识。 **约束限制：** 不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释：** 结果消息。 **约束限制：** 不涉及。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件路径。 **约束限制：** 不涉及。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** 所在版本号（commit id）。 **约束限制：** 不涉及。
    /// </summary>

    std::string getRevision() const;
    bool revisionIsSet() const;
    void unsetrevision();
    void setRevision(const std::string& value);

    /// <summary>
    /// **参数解释：** 符号列表。 **约束限制：** 不涉及。
    /// </summary>

    std::vector<SymbolNodeDto>& getSymbols();
    bool symbolsIsSet() const;
    void unsetsymbols();
    void setSymbols(const std::vector<SymbolNodeDto>& value);


protected:
    std::string result_;
    bool resultIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string revision_;
    bool revisionIsSet_;
    std::vector<SymbolNodeDto> symbols_;
    bool symbolsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowRepositoryNavigationOutlineResponse_H_
