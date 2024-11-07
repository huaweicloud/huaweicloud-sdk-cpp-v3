#ifndef HUAWEICLOUD_SDK_KVS_V1_KvsClient_H_
#define HUAWEICLOUD_SDK_KVS_V1_KvsClient_H_
#ifndef HUAWEICLOUD_SDK_BSON_
#define HUAWEICLOUD_SDK_BSON_
#endif // HUAWEICLOUD_SDK_BSON_

#include <huaweicloud/kvs/v1/KvsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/kvs/v1/model/CreateTableRequest.h>
#include <huaweicloud/kvs/v1/model/CreateTableRequestBody.h>
#include <huaweicloud/kvs/v1/model/CreateTableResponse.h>
#include <huaweicloud/kvs/v1/model/DescribeTableRequest.h>
#include <huaweicloud/kvs/v1/model/DescribeTableRequestBody.h>
#include <huaweicloud/kvs/v1/model/DescribeTableResponse.h>
#include <huaweicloud/kvs/v1/model/ListStoreRequest.h>
#include <huaweicloud/kvs/v1/model/ListStoreRequestBody.h>
#include <huaweicloud/kvs/v1/model/ListStoreResponse.h>
#include <huaweicloud/kvs/v1/model/ListTableRequest.h>
#include <huaweicloud/kvs/v1/model/ListTableRequestBody.h>
#include <huaweicloud/kvs/v1/model/ListTableResponse.h>
#include <string>

#include <huaweicloud/kvs/v1/model/CheckHealthRequest.h>
#include <huaweicloud/kvs/v1/model/CheckHealthRequestBody.h>
#include <huaweicloud/kvs/v1/model/CheckHealthResponse.h>

#include <huaweicloud/kvs/v1/model/BatchWriteKvRequest.h>
#include <huaweicloud/kvs/v1/model/BatchWriteKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/BatchWriteKvResponse.h>
#include <huaweicloud/kvs/v1/model/DeleteKvRequest.h>
#include <huaweicloud/kvs/v1/model/DeleteKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/DeleteKvResponse.h>
#include <huaweicloud/kvs/v1/model/GetKvRequest.h>
#include <huaweicloud/kvs/v1/model/GetKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/GetKvResponse.h>
#include <huaweicloud/kvs/v1/model/PutKvRequest.h>
#include <huaweicloud/kvs/v1/model/PutKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/PutKvResponse.h>
#include <huaweicloud/kvs/v1/model/ScanKvRequest.h>
#include <huaweicloud/kvs/v1/model/ScanKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/ScanKvResponse.h>
#include <huaweicloud/kvs/v1/model/ScanSkeyKvRequest.h>
#include <huaweicloud/kvs/v1/model/ScanSkeyKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/ScanSkeyKvResponse.h>
#include <huaweicloud/kvs/v1/model/UpdateKvRequest.h>
#include <huaweicloud/kvs/v1/model/UpdateKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/UpdateKvResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Kvs::V1::Model;

class HUAWEICLOUD_KVS_V1_EXPORT  KvsClient : public Client
{
public:

    KvsClient();

    virtual ~KvsClient();

    static ClientBuilder<KvsClient> newBuilder();

    // 创建表
    //
    // 在指定仓内创建表，表名在仓内唯一；创建表时，指定主键模板及本地二级索引模板及全局二级索引模板。创建表时，如果仓不存在，将会自动创建仓。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTableResponse> createTable(
        CreateTableRequest &request
    );
    // 查询表
    //
    // 指定仓查询表属性，如容量，规模，配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeTableResponse> describeTable(
        DescribeTableRequest &request
    );
    // 列举仓
    //
    // 一个账户下可以创建最多25个仓，每个仓可以创建最多100个store，响应中一次性返回所有仓名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStoreResponse> listStore(
        ListStoreRequest &request
    );
    // 列举表
    //
    // 指定仓列举创建的所有表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTableResponse> listTable(
        ListTableRequest &request
    );

    // 网络信道健康检查
    //
    // 网络信道健康检查，返回response未抛出网络异常即为成功
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckHealthResponse> checkHealth(
        CheckHealthRequest &request
    );

    // 批量写请求
    //
    // 批量写请求，其中可以携带一或多个表的不同kv的写操作，上传kv/删除kv。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchWriteKvResponse> batchWriteKv(
        BatchWriteKvRequest &request
    );
    // 删除单个kv
    //
    // 指定表，指定主键，删除该文档；允许指定条件执行。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKvResponse> deleteKv(
        DeleteKvRequest &request
    );
    // 查询单个kv
    //
    // 下载一个kv文档的全部内容，或者部分字段的内容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetKvResponse> getKv(
        GetKvRequest &request
    );
    // 上传单个kv
    //
    // 指定表，新建kv或覆盖已有kv，且满足表的key schema描述；允许指定条件执行。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutKvResponse> putKv(
        PutKvRequest &request
    );
    // 扫描所有kv
    //
    // 指定表，扫描表下所有kv；允许指定过滤条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScanKvResponse> scanKv(
        ScanKvRequest &request
    );
    // 扫描分区键内kv
    //
    // 指定表及分区键，携带条件查询kv；允许指定过滤条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScanSkeyKvResponse> scanSkeyKv(
        ScanSkeyKvRequest &request
    );
    // 更新单个kv
    //
    // 指定表，指定主键，指定更新文档的部分内容，如果是自描述文档，指定字段名；如果是二进制文档，指定偏移位置和长度；允许指定条件执行。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKvResponse> updateKv(
        UpdateKvRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_KVS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Kvs::V1::KvsClient>;

#endif // HUAWEICLOUD_SDK_KVS_V1_KvsClient_H_

