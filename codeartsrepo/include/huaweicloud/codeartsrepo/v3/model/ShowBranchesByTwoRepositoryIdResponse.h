
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowBranchesByTwoRepositoryIdResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowBranchesByTwoRepositoryIdResponse_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/TagList.h>
#include <string>
#include <huaweicloud/codeartsrepo/v3/model/Error.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ShowBranchesByTwoRepositoryIdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowBranchesByTwoRepositoryIdResponse();
    virtual ~ShowBranchesByTwoRepositoryIdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowBranchesByTwoRepositoryIdResponse members

    /// <summary>
    /// 
    /// </summary>

    Error getError() const;
    bool errorIsSet() const;
    void unseterror();
    void setError(const Error& value);

    /// <summary>
    /// 
    /// </summary>

    TagList getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const TagList& value);

    /// <summary>
    /// 响应状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    Error error_;
    bool errorIsSet_;
    TagList result_;
    bool resultIsSet_;
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowBranchesByTwoRepositoryIdResponse_H_
