
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalRepositoryImportRecordsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalRepositoryImportRecordsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/RepositoryImportRecordDto.h>
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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListPersonalRepositoryImportRecordsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPersonalRepositoryImportRecordsResponse();
    virtual ~ListPersonalRepositoryImportRecordsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPersonalRepositoryImportRecordsResponse members

    /// <summary>
    /// 当前用户仓库导入任务列表
    /// </summary>

    std::vector<RepositoryImportRecordDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<RepositoryImportRecordDto>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXTotal() const;
    bool xTotalIsSet() const;
    void unsetxTotal();
    void setXTotal(const std::string& value);


protected:
    std::vector<RepositoryImportRecordDto> body_;
    bool bodyIsSet_;
    std::string xTotal_;
    bool xTotalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListPersonalRepositoryImportRecordsResponse_H_
