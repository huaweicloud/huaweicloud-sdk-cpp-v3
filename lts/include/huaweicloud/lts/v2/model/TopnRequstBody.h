
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_TopnRequstBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_TopnRequstBody_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  TopnRequstBody
    : public ModelBase
{
public:
    TopnRequstBody();
    virtual ~TopnRequstBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TopnRequstBody members

    /// <summary>
    /// 结束时间时间戳，毫秒时间
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 是否降序  true / false
    /// </summary>

    bool isIsDesc() const;
    bool isDescIsSet() const;
    void unsetisDesc();
    void setIsDesc(bool value);

    /// <summary>
    /// 资源类型，log_group / log_stream / tenant
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 排序依据，index/write/storage/basicTransfer/seniorTransfer，必须是search_list中存在的数据
    /// </summary>

    std::string getSortBy() const;
    bool sortByIsSet() const;
    void unsetsortBy();
    void setSortBy(const std::string& value);

    /// <summary>
    /// 开始时间时间戳，毫秒时间，最多支持30天范围内的查询
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// 查询前多少数据，范围1~100
    /// </summary>

    int32_t getTopn() const;
    bool topnIsSet() const;
    void unsettopn();
    void setTopn(int32_t value);

    /// <summary>
    /// 过滤条件 {     \&quot;log_group_id\&quot;: \&quot;xxxxxx\&quot; }过滤器，为一个map结构，键为过滤属性，值为属性值，不支持模糊匹配
    /// </summary>

    std::map<std::string, std::string>& getFilter();
    bool filterIsSet() const;
    void unsetfilter();
    void setFilter(const std::map<std::string, std::string>& value);

    /// <summary>
    /// 查询数据类型，字符串数组可多种搭配，只能在index/write/storage/basicTransfer/seniorTransfer中选填
    /// </summary>

    std::vector<std::string>& getSearchList();
    bool searchListIsSet() const;
    void unsetsearchList();
    void setSearchList(const std::vector<std::string>& value);


protected:
    int64_t endTime_;
    bool endTimeIsSet_;
    bool isDesc_;
    bool isDescIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string sortBy_;
    bool sortByIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int32_t topn_;
    bool topnIsSet_;
    std::map<std::string, std::string> filter_;
    bool filterIsSet_;
    std::vector<std::string> searchList_;
    bool searchListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_TopnRequstBody_H_
