
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectFieldConfigOptionVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectFieldConfigOptionVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProjectFieldConfigOptionVo
    : public ModelBase
{
public:
    ProjectFieldConfigOptionVo();
    virtual ~ProjectFieldConfigOptionVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectFieldConfigOptionVo members

    /// <summary>
    /// 字段选项URI标识.新增不传，修改、删除使用必传
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 可选项名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 可选项code值
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const NameAndIdVo& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 修改标识，0：不可修改 1：可修改，用于结果和状态的选项值
    /// </summary>

    int32_t getFlag() const;
    bool flagIsSet() const;
    void unsetflag();
    void setFlag(int32_t value);

    /// <summary>
    /// 顺序数值
    /// </summary>

    int32_t getSortNumb() const;
    bool sortNumbIsSet() const;
    void unsetsortNumb();
    void setSortNumb(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const NameAndIdVo& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 更新时间时间戳
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string code_;
    bool codeIsSet_;
    NameAndIdVo updator_;
    bool updatorIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t flag_;
    bool flagIsSet_;
    int32_t sortNumb_;
    bool sortNumbIsSet_;
    NameAndIdVo creator_;
    bool creatorIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectFieldConfigOptionVo_H_
