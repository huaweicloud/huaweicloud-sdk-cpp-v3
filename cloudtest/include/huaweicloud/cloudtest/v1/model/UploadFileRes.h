
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadFileRes_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadFileRes_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  UploadFileRes
    : public ModelBase
{
public:
    UploadFileRes();
    virtual ~UploadFileRes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadFileRes members

    /// <summary>
    /// 所属的AWInstance的ID
    /// </summary>

    std::string getAwInsId() const;
    bool awInsIdIsSet() const;
    void unsetawInsId();
    void setAwInsId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建时间戳
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 创建时间字符串
    /// </summary>

    std::string getCreateTimeString() const;
    bool createTimeStringIsSet() const;
    void unsetcreateTimeString();
    void setCreateTimeString(const std::string& value);

    /// <summary>
    /// 创建人
    /// </summary>

    std::string getCreateUser() const;
    bool createUserIsSet() const;
    void unsetcreateUser();
    void setCreateUser(const std::string& value);

    /// <summary>
    /// 当前大小
    /// </summary>

    int64_t getCurrentSize() const;
    bool currentSizeIsSet() const;
    void unsetcurrentSize();
    void setCurrentSize(int64_t value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 文件在系统中的名字
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 文件的原名
    /// </summary>

    std::string getOriginName() const;
    bool originNameIsSet() const;
    void unsetoriginName();
    void setOriginName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 区域名称
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 测试用例的唯一标识符
    /// </summary>

    std::string getTestcaseId() const;
    bool testcaseIdIsSet() const;
    void unsettestcaseId();
    void setTestcaseId(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 更新时间戳
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);

    /// <summary>
    /// 更新时间字符串
    /// </summary>

    std::string getUpdateTimeString() const;
    bool updateTimeStringIsSet() const;
    void unsetupdateTimeString();
    void setUpdateTimeString(const std::string& value);

    /// <summary>
    /// 更新人
    /// </summary>

    std::string getUpdateUser() const;
    bool updateUserIsSet() const;
    void unsetupdateUser();
    void setUpdateUser(const std::string& value);


protected:
    std::string awInsId_;
    bool awInsIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    std::string createTimeString_;
    bool createTimeStringIsSet_;
    std::string createUser_;
    bool createUserIsSet_;
    int64_t currentSize_;
    bool currentSizeIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string originName_;
    bool originNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string testcaseId_;
    bool testcaseIdIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string updateTimeString_;
    bool updateTimeStringIsSet_;
    std::string updateUser_;
    bool updateUserIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_UploadFileRes_H_
