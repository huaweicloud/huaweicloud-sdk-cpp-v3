
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_DiffRefsDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_DiffRefsDto_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  DiffRefsDto
    : public ModelBase
{
public:
    DiffRefsDto();
    virtual ~DiffRefsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DiffRefsDto members

    /// <summary>
    /// base sha
    /// </summary>

    std::string getBaseSha() const;
    bool baseShaIsSet() const;
    void unsetbaseSha();
    void setBaseSha(const std::string& value);

    /// <summary>
    /// head sha
    /// </summary>

    std::string getHeadSha() const;
    bool headShaIsSet() const;
    void unsetheadSha();
    void setHeadSha(const std::string& value);

    /// <summary>
    /// start sha
    /// </summary>

    std::string getStartSha() const;
    bool startShaIsSet() const;
    void unsetstartSha();
    void setStartSha(const std::string& value);


protected:
    std::string baseSha_;
    bool baseShaIsSet_;
    std::string headSha_;
    bool headShaIsSet_;
    std::string startSha_;
    bool startShaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_DiffRefsDto_H_
