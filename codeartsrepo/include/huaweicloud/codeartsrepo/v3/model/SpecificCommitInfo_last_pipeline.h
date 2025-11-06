
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_SpecificCommitInfo_last_pipeline_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_SpecificCommitInfo_last_pipeline_H_


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
/// 流水线信息
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  SpecificCommitInfo_last_pipeline
    : public ModelBase
{
public:
    SpecificCommitInfo_last_pipeline();
    virtual ~SpecificCommitInfo_last_pipeline();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SpecificCommitInfo_last_pipeline members

    /// <summary>
    /// 流水线id
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 提交对应的SHA id
    /// </summary>

    std::string getSha() const;
    bool shaIsSet() const;
    void unsetsha();
    void setSha(const std::string& value);

    /// <summary>
    /// 分支名
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// 流水线状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 流水线url
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);


protected:
    int32_t id_;
    bool idIsSet_;
    std::string sha_;
    bool shaIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_SpecificCommitInfo_last_pipeline_H_
