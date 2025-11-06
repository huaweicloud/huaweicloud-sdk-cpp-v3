
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TemplateRepositoryList_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TemplateRepositoryList_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/TemplateRepository.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  TemplateRepositoryList
    : public ModelBase
{
public:
    TemplateRepositoryList();
    virtual ~TemplateRepositoryList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateRepositoryList members

    /// <summary>
    /// 模板列表
    /// </summary>

    std::vector<TemplateRepository>& getProjects();
    bool projectsIsSet() const;
    void unsetprojects();
    void setProjects(const std::vector<TemplateRepository>& value);

    /// <summary>
    /// 模板总数
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);


protected:
    std::vector<TemplateRepository> projects_;
    bool projectsIsSet_;
    int32_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_TemplateRepositoryList_H_
