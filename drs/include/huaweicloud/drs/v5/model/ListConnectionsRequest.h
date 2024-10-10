
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ListConnectionsRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ListConnectionsRequest_H_


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
class HUAWEICLOUD_DRS_V5_EXPORT  ListConnectionsRequest
    : public ModelBase
{
public:
    ListConnectionsRequest();
    virtual ~ListConnectionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConnectionsRequest members

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 连接ID。
    /// </summary>

    std::string getConnectionId() const;
    bool connectionIdIsSet() const;
    void unsetconnectionId();
    void setConnectionId(const std::string& value);

    /// <summary>
    /// 连接类型。 - mysql - oracle - postgresql - mongodb
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// 连接名称，忽略大小写。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 云上数据库实例ID。
    /// </summary>

    std::string getInstId() const;
    bool instIdIsSet() const;
    void unsetinstId();
    void setInstId(const std::string& value);

    /// <summary>
    /// 连接IP。
    /// </summary>

    std::string getIp() const;
    bool ipIsSet() const;
    void unsetip();
    void setIp(const std::string& value);

    /// <summary>
    /// 连接描述。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 时间区间用“，”分割。示例：2024-05-17T07:46:00.414Z,2024-05-20T07:46:00.999Z。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 企业项目ID。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 偏移量，默认值为0，表示查询该偏移量后面的记录。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询返回记录的数量限制，默认值为10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 值为“true”时会使得offset和limit参数失效并返回所有记录。
    /// </summary>

    bool isFetchAll() const;
    bool fetchAllIsSet() const;
    void unsetfetchAll();
    void setFetchAll(bool value);

    /// <summary>
    /// 返回结果按该关键字排序，默认为“created_at”。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 降序或升序（分别对应desc和asc，默认为“desc”）。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string connectionId_;
    bool connectionIdIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string instId_;
    bool instIdIsSet_;
    std::string ip_;
    bool ipIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    bool fetchAll_;
    bool fetchAllIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListConnectionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListConnectionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ListConnectionsRequest_H_
