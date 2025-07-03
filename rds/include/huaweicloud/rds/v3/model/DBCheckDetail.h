
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_DBCheckDetail_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_DBCheckDetail_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/DetectedProblem.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库检查结果
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  DBCheckDetail
    : public ModelBase
{
public:
    DBCheckDetail();
    virtual ~DBCheckDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DBCheckDetail members

    /// <summary>
    /// 检查说明链接
    /// </summary>

    std::string getDocumentationLink() const;
    bool documentationLinkIsSet() const;
    void unsetdocumentationLink();
    void setDocumentationLink(const std::string& value);

    /// <summary>
    /// 检查项描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 检查项id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 检查项标题
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 检查状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 各项检查项检测到的问题
    /// </summary>

    std::vector<DetectedProblem>& getDetectedProblems();
    bool detectedProblemsIsSet() const;
    void unsetdetectedProblems();
    void setDetectedProblems(const std::vector<DetectedProblem>& value);


protected:
    std::string documentationLink_;
    bool documentationLinkIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::vector<DetectedProblem> detectedProblems_;
    bool detectedProblemsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_DBCheckDetail_H_
