
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowProgressDataRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowProgressDataRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowProgressDataRequest
    : public ModelBase
{
public:
    ShowProgressDataRequest();
    virtual ~ShowProgressDataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProgressDataRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询， offset 大于等于 0。默认为0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量。默认为10，取值范围【1-1000】
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 迁移对象类型。 - table - event - table_structure - procedure - view - function - database - trigger - table_indexs
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 需要过滤的源库对象名称
    /// </summary>

    std::string getSearchName() const;
    bool searchNameIsSet() const;
    void unsetsearchName();
    void setSearchName(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string searchName_;
    bool searchNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowProgressDataRequest& dereference_from_shared_ptr(std::shared_ptr<ShowProgressDataRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowProgressDataRequest_H_
