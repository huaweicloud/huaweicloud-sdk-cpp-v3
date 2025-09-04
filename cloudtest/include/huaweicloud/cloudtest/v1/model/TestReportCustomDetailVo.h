
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportCustomDetailVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportCustomDetailVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/AttachmentVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  TestReportCustomDetailVo
    : public ModelBase
{
public:
    TestReportCustomDetailVo();
    virtual ~TestReportCustomDetailVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TestReportCustomDetailVo members

    /// <summary>
    /// 测试报告自定义模块Uri
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 测试报告自定义模块名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否显示(0:否，1:是)
    /// </summary>

    int32_t getDisplay() const;
    bool displayIsSet() const;
    void unsetdisplay();
    void setDisplay(int32_t value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 附件信息
    /// </summary>

    std::vector<AttachmentVo>& getAttachments();
    bool attachmentsIsSet() const;
    void unsetattachments();
    void setAttachments(const std::vector<AttachmentVo>& value);

    /// <summary>
    /// 创建人ID
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 修改人ID
    /// </summary>

    std::string getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const std::string& value);

    /// <summary>
    /// 测试报告uri
    /// </summary>

    std::string getTestReportUri() const;
    bool testReportUriIsSet() const;
    void unsettestReportUri();
    void setTestReportUri(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    int64_t getCreateTimestamp() const;
    bool createTimestampIsSet() const;
    void unsetcreateTimestamp();
    void setCreateTimestamp(int64_t value);

    /// <summary>
    /// 创建人名
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 修改时间戳
    /// </summary>

    int64_t getUpdateTimestamp() const;
    bool updateTimestampIsSet() const;
    void unsetupdateTimestamp();
    void setUpdateTimestamp(int64_t value);

    /// <summary>
    /// 修改人名
    /// </summary>

    std::string getUpdatorName() const;
    bool updatorNameIsSet() const;
    void unsetupdatorName();
    void setUpdatorName(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t display_;
    bool displayIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<AttachmentVo> attachments_;
    bool attachmentsIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string updator_;
    bool updatorIsSet_;
    std::string testReportUri_;
    bool testReportUriIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    int64_t createTimestamp_;
    bool createTimestampIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimestamp_;
    bool updateTimestampIsSet_;
    std::string updatorName_;
    bool updatorNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_TestReportCustomDetailVo_H_
